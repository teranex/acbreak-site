<?php
/**
 * @file
 * acbreak_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function acbreak_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Algemeen',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:algemeen/club/wie-is-wie
  $menu_links['main-menu:algemeen/club/wie-is-wie'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'algemeen/club/wie-is-wie',
    'router_path' => 'algemeen/club/wie-is-wie',
    'link_title' => 'Wie is Wie',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/3',
  );
  // Exported menu link: main-menu:atletiek
  $menu_links['main-menu:atletiek'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'atletiek',
    'router_path' => 'atletiek',
    'link_title' => 'Atletiek',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: main-menu:atletiek/wedstrijden
  $menu_links['main-menu:atletiek/wedstrijden'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'atletiek/wedstrijden',
    'router_path' => 'atletiek/wedstrijden',
    'link_title' => 'Wedstrijden',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'atletiek',
  );
  // Exported menu link: main-menu:joggers
  $menu_links['main-menu:joggers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'joggers',
    'router_path' => 'joggers',
    'link_title' => 'Joggers',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: main-menu:node/3
  $menu_links['main-menu:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Club',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Algemeen');
  t('Atletiek');
  t('Club');
  t('Joggers');
  t('Wedstrijden');
  t('Wie is Wie');


  return $menu_links;
}
