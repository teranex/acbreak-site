<?php

function acbreak_install_themes() {
  // Enable the admin theme.
  db_update('system')
    ->fields(array('status' => 1))
    ->condition('type', 'theme')
    ->condition('name', 'seven')
    ->execute();

  //db_update('system')
    //->fields(array('status' => 1))
    //->condition('type', 'theme')
    //->condition('name', 'marinelli')
    //->execute();

  // enable acbreak theme
  db_update('system')
    ->fields(array('status' => 1))
    ->condition('type', 'theme')
    ->condition('name', 'acbreak')
    ->execute();

  // set the site theme
  variable_set('theme_default', 'acbreak');
  variable_set('admin_theme', 'seven');
  variable_set('node_admin_theme', '1');
}
