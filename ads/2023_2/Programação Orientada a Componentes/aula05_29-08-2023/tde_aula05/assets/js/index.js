function initialize(){
  document.addEventListener("DOMContentLoaded", function() {
    const contentDiv = document.getElementById("content");
    const navLinks = document.querySelectorAll("nav a");
  
    const persons = [
      {nome: "Daniel", idade: 25},
      {nome: "Endriw", idade: 25},
      {nome: "Lucas", idade: 25},
    ];
  
    const pages = {
      home: `<h1>Welcome to the Home Page</h1>`,
      people: `
        <div class="d-flex m-5 w-100 justify-content-center gap-4">
          <div class="w-100 d-flex flex-column align-items-start">
          <h2>Contact List</h2>
            <table id="peopleTable" class="w-100">
              <thead class="justify-content-between">
                <tr>
                  <th>Nome</th>
                  <th>Idade</th>
                </tr>
              </thead>
              <tbody></tbody>
            </table>
          </div>
        </div>
      `,
      about: `<h1>About Us</h1><p>This is the About page.</p>`
    };
  
    contentDiv.innerHTML = pages.home;
  
    navLinks.forEach(link => {
      link.addEventListener("click", function(event){
        const targetPage = event.target.getAttribute("href").substring(1);
        contentDiv.innerHTML = pages[targetPage];
  
        if (targetPage === "people"){
          const tbody = document.getElementById("peopleTable");
          tbody.innerHTML = '';
  
          const peopleTableRows = persons.map(person => `
            <tr>
              <td>${person.nome}</td>
              <td>${person.idade}</td>
            </tr>
          `).join('');
  
          tbody.innerHTML = peopleTableRows;
        }
      }); 
    });
  });
}