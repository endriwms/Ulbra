$(document).ready(() =>{

  /*===== Menu abre e fecha =====*/ 
  const navMenu = document.getElementById('nav-menu'),
        toggleMenu = document.getElementById('nav-toggle'),
        closeMenu = document.getElementById('nav-close')
  
  /* Mostrar menu */ 
  toggleMenu.addEventListener('click', ()=>{
      navMenu.classList.toggle('show')
  })
  
  /* Esconder menu */
  closeMenu.addEventListener('click', ()=>{
      navMenu.classList.remove('show')
  })
  
  /* Ativa e desativa menu */
  const navLink = document.querySelectorAll('.nav__link');   
  
  function linkAction(){
    /* Link ativo */
    navLink.forEach(n => n.classList.remove('active'));
    this.classList.add('active');
    
    /* Remover menu no mobile */
    navMenu.classList.remove('show')
  }

  navLink.forEach(n => n.addEventListener('click', linkAction));

  var nav = document.querySelector('nav');
    window.addEventListener('scroll', function(){
        if(window.pageYOffset > 100){
            nav.classList.add('bg-dark', 'shadow', 'p-3');
        }else{
            nav.classList.remove('bg-dark', 'shadow', 'p-3');
        }
    });
})
