<?php
  namespace App\Controller\Admin;

  use App\Controllers\BaseController;

  class Admin extends BaseController {
    public function index(){
      //testar login
      $session = \Config\Services::session();
      if ($session -> has('user')){
        echo 'apresentar a home';
      } else {
        return redirect()->to(base_url('admin/login'));
      }
    }

    public function login(){
      echo view('admin/main/login');
    }
  }