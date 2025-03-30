





// ------------ Dynamically login or userinput add karne ke liye -------------------//
// Get the modal
var modal = document.getElementById("authModal");


var signupBtn = document.querySelector(".singupbtn");
var loginBtn = document.querySelector(".loginbtn");

var span = document.getElementsByClassName("close")[0];

// When the user clicks on the button, open the modal
signupBtn.onclick = function () {
    modal.style.display = "block";
    document.getElementById("modalTitle").textContent = "Sign Up";
    document.getElementById("submitBtn").textContent = "Sign Up";
    document.getElementById("switchAuthLink").textContent = "Login";
}

loginBtn.onclick = function () {
    modal.style.display = "block";
    document.getElementById("modalTitle").textContent = "Login";
    document.getElementById("submitBtn").textContent = "Login";
    document.getElementById("switchAuthLink").textContent = "Sign Up";
    document.getElementById("email").style.display = "none";
}

// When the user clicks on <span> (x), close the modal
span.onclick = function () {
    modal.style.display = "none";
}

window.onclick = function (event) {
    if (event.target == modal) {
        modal.style.display = "none";
    }
}

// Switch between signup and login
document.getElementById("switchAuthLink").onclick = function (e) {
    e.preventDefault();
    if (this.textContent === "Login") {
        document.getElementById("modalTitle").textContent = "Login";
        document.getElementById("submitBtn").textContent = "Login";
        this.textContent = "Sign Up";
        document.getElementById("email").style.display = "none";
    } else {
        document.getElementById("modalTitle").textContent = "Sign Up";
        document.getElementById("submitBtn").textContent = "Sign Up";
        this.textContent = "Login";
        document.getElementById("email").style.display = "block";
    }
}

// Handle form submission
document.getElementById("authForm").onsubmit = function (e) {
    e.preventDefault();
    var username = document.getElementById("username").value;
    var password = document.getElementById("password").value;
    var email = document.getElementById("email").value;

    if (document.getElementById("submitBtn").textContent === "Sign Up") {
        console.log("Sign up with:", username, email, password);
    } else {
        console.log("Login with:", username, password);
    }

    modal.style.display = "none";
}

// -------------------------------------------------------------------------------------------\\





// -------------------------------------------------------------------------------------------\\

document.addEventListener("DOMContentLoaded", function () {
    const player = document.querySelector('.player');
    const audioPlayer = document.getElementById("audioPlayer");

    function forward10() {
        audioPlayer.currentTime += 10;
    }
    function backward10() {
        audioPlayer.currentTime -= 10;
    }

    // Event listeners for forward and backward buttons
    document.getElementById('forwardButton').addEventListener('click', forward10);
    document.getElementById('backwardButton').addEventListener('click', backward10);
});


let currentSongIndex = 0;
let audioPlayer = document.getElementById("audioPlayer");
let playPauseButton = document.querySelector(".fa-play");
let timeElement = document.querySelector(".time-bar");
let singerElement = document.querySelector(".singer-info");
let titleElement = document.querySelector(".title-info");
let descriptionElement = document.querySelector(".description-info");
let currentTimeElement = document.querySelector(".current-time");

async function main() {
    let cardContainer = document.getElementById("spotifyCardContainer");
    songs.forEach((song, index) => {
        let card = document.createElement("div");
        card.classList.add("card");
        card.innerHTML = `
        <img src="${song.image}" alt="">
    `;
        card.onclick = () => playSong(index);
        cardContainer.appendChild(card);
    });
}

async function playSong(index) {
    if (index < 0 || index >= songs.length) return;
    currentSongIndex = index;
    let song = songs[index];
    audioPlayer.src = song.audio;
    audioPlayer.play();
    updateSongInfo(index);
    playPauseButton.classList.remove("fa-play");
    playPauseButton.classList.add("fa-pause");
}

function togglePlayPause() {
    if (audioPlayer.paused) {
        audioPlayer.play();
        playPauseButton.classList.remove("fa-play");
        playPauseButton.classList.add("fa-pause");
    } else {
        audioPlayer.pause();
        playPauseButton.classList.remove("fa-pause");
        playPauseButton.classList.add("fa-play");
    }
}

function forwardSong() {
    currentSongIndex = (currentSongIndex + 1) % songs.length;
    playSong(currentSongIndex);
}

function backwardSong() {
    currentSongIndex = (currentSongIndex - 1 + songs.length) % songs.length;
    playSong(currentSongIndex);
}


function updateSongInfo(index) {
    let song = songs[index];
    let singerImageElement = document.getElementById("singerImage");
    let singerNameElement = document.getElementById("singerName");

    singerImageElement.src = song.image;
    singerNameElement.textContent = song.singer;
    titleElement.textContent = song.title;
}

audioPlayer.addEventListener("timeupdate", function () {
    let currentTime = audioPlayer.currentTime;
    let duration = audioPlayer.duration;
    let percentage = (currentTime / duration) * 100;
    timeElement.style.width = `${percentage}%`;
    currentTimeElement.textContent = formatTime(currentTime);
});

function formatTime(time) {
    let minutes = Math.floor(time / 60);
    let seconds = Math.floor(time % 60);
    seconds = seconds < 10 ? `0${seconds}` : seconds;
    return `${minutes}:${seconds}`;
}


// ADD AN EVENT LISTNER FOR HAMBURGER
document.querySelector("#hamburger").addEventListener("click", () => {
    document.querySelector(".left").style.left = "0";
});

//ADD ANA EVENT LISTNER FOR CLOSE BUTTON
document.querySelector("#close").addEventListener("click", () => {
    document.querySelector(".left").style.left = "-100%";
});     

document.querySelector(".close").addEventListener("click", () => {
    document.querySelector(".left").style.left = "-100%";
});


main();

// -------------------- Yeh code search box KE LIYE HAI --------------------//
document.getElementById('searchButton').addEventListener('click', searchMusic);
document.getElementById('searchInput').addEventListener('keypress', function (e) {
    if (e.key === 'Enter') {
        searchMusic();
    }
});

function searchMusic() {
    const searchTerm = document.getElementById('searchInput').value.toLowerCase();
    const filteredSongs = songs.filter(song =>
        song.title.toLowerCase().includes(searchTerm) ||
        song.singer.toLowerCase().includes(searchTerm)
    );

    updateCardContainer(filteredSongs);
}

function updateCardContainer(filteredSongs) {
    const cardContainer = document.getElementById("spotifyCardContainer");
    cardContainer.innerHTML = '';

    filteredSongs.forEach((song, index) => {
        let card = document.createElement("div");
        card.classList.add("card");
        card.innerHTML = `
<img src="${song.image}" alt="">
`;
        card.onclick = () => playSong(songs.indexOf(song));
        cardContainer.appendChild(card);
    });
}

// -------------------------------------------------------------------------------//



//----------------------------------------------------------------------------------------------------//
// JavaScript for Theme Toggle
document.addEventListener('DOMContentLoaded', function () {
    const themeToggle = document.getElementById('theme-toggle');
    const themeIcon = document.getElementById('theme-icon');
    const body = document.body;
    const icons = document.querySelectorAll('.theme-icon, i'); 
    const savedTheme = localStorage.getItem('theme') || 'light-mode';
    body.classList.add(savedTheme);

    if (savedTheme === 'dark-mode') {
        themeIcon.classList.replace('fa-sun', 'fa-moon');
    } else {
        themeIcon.classList.replace('fa-moon', 'fa-sun');
    }

    icons.forEach(icon => {
        if (savedTheme === 'dark-mode') {
            icon.style.filter = 'invert(1)'; 
        } else {
            icon.style.filter = 'invert(0)'
        }
    });

    themeToggle.addEventListener('click', function () {
        if (body.classList.contains('dark-mode')) {
            body.classList.replace('dark-mode', 'light-mode');
            themeIcon.classList.replace('fa-moon', 'fa-sun');
            localStorage.setItem('theme', 'light-mode');
        } else {
            body.classList.replace('light-mode', 'dark-mode');
            themeIcon.classList.replace('fa-sun', 'fa-moon');
            localStorage.setItem('theme', 'dark-mode');
        }
        icons.forEach(icon => {
            if (body.classList.contains('dark-mode')) {
                icon.style.filter = 'invert(1)'; 
            } else {
                icon.style.filter = 'invert(0)'; 
            }
        });
    });
});


//  ------------------------------------------------------------------------------------------------------//

// Briteness ke liye hai ye code
// JavaScript
const brightnessSlider = document.getElementById('brightness-slider');
const targetElement = document.body; // Change this to the element you want to adjust

// Function to update brightness
function updateBrightness() {
    const brightnessValue = brightnessSlider.value;
    targetElement.style.filter = `brightness(${brightnessValue})`;
}

// Add event listener to the slider
brightnessSlider.addEventListener('input', updateBrightness);

// Initialize the brightness based on the slider's default value
updateBrightness();







