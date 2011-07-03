<?php
define('MENU_LINK_PATH', 0);
define('MENU_LINK_NAME', 1);
define('MENU_INTERN_ID', 2);
define('MENU_PARENT_ID', 3);
define('MENU_ATTRIBUTES', 4);
#define('MENU_IMAGE_NAME',4);

function menu_installer_create($menu_name, $filename) {
  $weight = -1;
  $depth = 0;

  //$filename = drupal_get_path('module', 'menu_installer') . '/' . $menu_name . '.inc';

  drupal_set_message('Install ' . $filename);

  if (file_exists($filename)) {
    $handle = fopen($filename, 'r');

    if ($handle) {

      while (($buffer = fgets($handle, 4096)) !== FALSE) {
        $line = explode(',', $buffer);

        if ($weight == -1) {
          $menu = menu_load($menu_name);

          if ($menu) {
            menu_installer_delete_menu_items($menu_name);
          } else {
            menu_installer_add_in_db($menu_name, $line[1], $line[2], $line[5], trim($line[6]));
          }
        } else {

          if (array_key_exists(MENU_PARENT_ID, $line) && isset($intern_ids)) {
            $iid = trim($line[MENU_PARENT_ID]);
            if (isset($intern_ids[$iid])) {
              $plid = $intern_ids[$iid];
            } else {
              $plid = 0;
            }
          } else {
            $plid = 0;
          }

            $link_path = trim($line[MENU_LINK_PATH]);
            $link_name = trim($line[MENU_LINK_NAME]);
            $intern_id = trim($line[MENU_INTERN_ID]);

          //if ($alias = menu_installer_get_alias_source($link_path)) {
            //drupal_set_message('Alias source found: ' . $link_path . ' -> ' . $alias->src);
            //$link_path = $alias->src;
          //}

          $options = array();

          if (isset($line[MENU_ATTRIBUTES])) {
            $options['attributes'] = unserialize(trim($line[MENU_ATTRIBUTES]));
          }

          $mlid = menu_installer_menu_link_save(
            $menu_name,
            $link_path,
            $link_name,
            $weight,
            $plid,
            $options
          );

          $intern_ids[$intern_id] = $mlid;
        }

        $weight++;
      }
    }

    fclose($handle);
  }
}


function menu_installer_add_in_db($menu_name, $title, $description, $i18n_mode, $language) {
  drupal_set_message('creating menu: '.$menu_name);
  db_insert('menu_custom')
    ->fields(array(
               'menu_name'   => $menu_name,
               'title'       => $title,
               'description' => $description,
               'language'    => $language,
               'i18n_mode'   => $i18n_mode,
             ))
    ->execute();

  drupal_set_message('Add menu: ' . $menu_name);
}


function menu_installer_delete_menu_items($menu_name) {
  db_delete('menu_links')
    ->condition('menu_name', $menu_name)
    ->execute();

  drupal_set_message('Delete menu links: ' . $menu_name);
}


function menu_installer_menu_link_save($menu_name, $link_path, $link_title, $weight, $plid = 0, $options = array()) {
  drupal_set_message('Save menu link: ' . $link_title);

  $item = array(
      'menu_name' => $menu_name,
      'link_path' => $link_path,
      'link_title' => $link_title,
      'weight' => $weight,
      'plid' => $plid,
      'options' => $options
  );

  menu_link_save($item);

  return $item['mlid'];
}

/**
 * Create a menu_block
 */
//function menu_installer_create_menu_block($block_settings, $title, $menu_name, $plid) {
  //// Determine the delta of the new block.
  //$block_ids = variable_get('menu_block_ids', array());
  //$delta = empty($block_ids) ? 1 : max($block_ids) + 1;

  //// Save the new array of blocks IDs.
  //$block_ids[] = $delta;
  //variable_set('menu_block_ids', $block_ids);

  //if (!array_key_exists('visibility', $block_settings)) {
    //$block_settings['visibility'] = 0;
  //}

  //if (!array_key_exists('pages', $block_settings)) {
    //$block_settings['pages'] = '';
  //}

  //db_query(
          //"INSERT INTO {blocks} (module, theme, delta, region, status, visibility, pages, title, weight)
          //VALUES ('menu_block', '%s', %d, '%s', 1, %d, '%s', '%s', '%d')",
          //$block_settings['theme'],   
          //$delta,
          //$block_settings['region'],
          //$block_settings['visibility'],
          //$block_settings['pages'],
          //$block_settings['title'] ? $block_settings['title'] : '',
          //$block_settings['weight'] ? $block_settings['weight'] : 0
  //);

  //variable_set('menu_block_' . $delta . '_admin_title', $title);
  //variable_set('menu_block_' . $delta . '_depth', $block_settings['depth'] ? $block_settings['depth'] : '0');
  //variable_set('menu_block_' . $delta . '_expanded', 0);
  //variable_set('menu_block_' . $delta . '_follow', 0);
  //variable_set('menu_block_' . $delta . '_level', '1');
  //variable_set('menu_block_' . $delta . '_parent', $menu_name . ':' . $plid);
  //variable_set('menu_block_' . $delta . '_sort', '');
  //variable_set('menu_block_' . $delta . '_title_link', $block_settings['title'] ? $block_settings['title'] : '');

  //drupal_set_message('Add menu block: delta -> ' . $delta . ', plid -> ' . $plid);

  //return $delta;
//}

//function menu_installer_get_active_menu_item($menu_name = array('primary-links', 'legal-links')) {

  //for ($i = 0; $i < count($menu_name); $i++) {
    //$menu_name[$i] = "'".$menu_name[$i]."'";
  //}

  ////$menu_link = db_fetch_object(
    ////db_query(
      ////"select * from {menu_links} where menu_name IN (".implode(',',$menu_name).") and link_path = '%s' ORDER BY plid DESC",
      ////$_GET['q']
    ////)
  ////);
  //$q = db_q

  //if ($menu_link) {
    //return $menu_link;
  //}

  //return NULL;
//}

function menu_installer_get_alias_source($path) {
  $result = db_query('url_alias')
              ->condition('alias', $path)
              ->execute();

  if ($result->rowCount() > 0) {
    return $result->fetchObject();
  }

  throw new Exception('Alias not found for path: '.$path);
}
