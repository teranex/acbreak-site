<?php

function acbreak_install_menu() {
  // Update the menu router information.
  menu_rebuild();

  require_once('menu_installer.inc');

  menu_installer_create('main-menu', dirname(__FILE__) . '/menu/main-menu.inc');

  // Update the menu router information.
  menu_rebuild();
}
