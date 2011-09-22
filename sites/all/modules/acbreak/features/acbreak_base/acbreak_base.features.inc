<?php
/**
 * @file
 * acbreak_base.features.inc
 */

/**
 * Implements hook_views_api().
 */
function acbreak_base_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function acbreak_base_node_info() {
  $items = array(
    'clubrecord' => array(
      'name' => t('Clubrecord'),
      'base' => 'node_content',
      'description' => t('Een record dat binnen de club werd behaald'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'evenement' => array(
      'name' => t('Evenement'),
      'base' => 'node_content',
      'description' => t('Een evenement'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('A group to be used as an Organic Group'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nieuws' => array(
      'name' => t('Nieuws'),
      'base' => 'node_content',
      'description' => t('Een nieuws item'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'persoon' => array(
      'name' => t('Persoon'),
      'base' => 'node_content',
      'description' => t('Een persoon die als trainer, bestuurslid, ... binnen de club actief is'),
      'has_title' => '1',
      'title_label' => t('Naam'),
      'help' => '',
    ),
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Een sponsor'),
      'has_title' => '1',
      'title_label' => t('Naam'),
      'help' => '',
    ),
    'wedstrijd' => array(
      'name' => t('Wedstrijd'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
