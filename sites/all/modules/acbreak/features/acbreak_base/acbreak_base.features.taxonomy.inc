<?php
/**
 * @file
 * acbreak_base.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function acbreak_base_taxonomy_default_vocabularies() {
  return array(
    'disciplines' => array(
      'name' => 'Disciplines',
      'machine_name' => 'disciplines',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'functies' => array(
      'name' => 'Functies',
      'machine_name' => 'functies',
      'description' => 'Functie binnen de club',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'groepen' => array(
      'name' => 'Groepen',
      'machine_name' => 'groepen',
      'description' => 'Group (miniemen, start2run, ...)',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
