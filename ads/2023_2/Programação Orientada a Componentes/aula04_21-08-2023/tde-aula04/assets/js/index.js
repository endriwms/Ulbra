const contentDiv = document.getElementById("content");
const navLinks = document.querySelectorAll("nav a");

const pages = {
  home: `<h1>Welcome to the Home Page</h1>`,
  contacts: `
    <div class="d-flex m-5 w-100 justify-content-center gap-4">

      <div class="w-100 d-flex flex-column">
        <h1 class="mb-2">Contact Us</h1>
        <form id="contactForm">
          <input type="text" id="name" placeholder="Nome" required><br>
          <input type="email" id="email" placeholder="email" class="mt-2" required><br>
          <input type="number" id="phone" placeholder="phone" class="mt-2"" required><br>
          <button type="submit" class="mt-2">Submit</button>
        </form>
      </div>

      <div class="w-100 d-flex flex-column align-items-start">
        <h2>Contact List</h2>
        <table id="contactTable" class="w-100">
          <thead class="justify-content-between">
            <tr>
              <th>Name</th>
              <th>Email</th>
              <th>Phone</th>
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
  link.addEventListener("click", function(event) {
    const targetPage = event.target.getAttribute("href").substring(1);
    contentDiv.innerHTML = pages[targetPage];
    if (targetPage === "contacts") {
      const contactForm = document.getElementById("contactForm");
      const contactTable = document.getElementById("contactTable");
      const tbody = contactTable.querySelector("tbody");

      contactForm.addEventListener("submit", function(event) {
        event.preventDefault();
        const name = document.getElementById("name").value;
        const email = document.getElementById("email").value;
        const phone = document.getElementById("phone").value;
        const contact = { name, email, phone };

        tbody.innerHTML += `
          <tr>
            <td>${contact.name}</td>
            <td>${contact.email}</td>
            <td>${contact.phone}</td>
          </tr>
        `;

        contactForm.reset();
      });
    }
  });
});