const yearSpan = document.getElementById("year");
const menuToggle = document.getElementById("menu-toggle");
const nav = document.getElementById("nav");
const themeBtn = document.getElementById("theme-toggle");
const contactForm = document.getElementById("contact-form");

yearSpan.textContent = new Date().getFullYear();

// Mobile menu
menuToggle?.addEventListener("click", () => {
  nav.style.display = nav.style.display === "flex" ? "none" : "flex";
});

// Theme toggle
themeBtn?.addEventListener("click", () => {
  document.body.classList.toggle("light");
  themeBtn.textContent = document.body.classList.contains("light") ? "🌞" : "🌙";
});

// Demo contact form
contactForm?.addEventListener("submit", (e) => {
  e.preventDefault();
  document.getElementById("form-msg").textContent = "Message sent (demo)!";
  contactForm.reset();
});
