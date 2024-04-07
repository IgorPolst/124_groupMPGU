var sizes = [4, 9, 10, 5, 110, 95, 40, 40];
var names = ["Mercury", "Venus", "Earth", "Mars", "Jupiter",
            "Saturn", "Uranus", "Neptune"];
var colours = ["grey", "brown", "green", "red", "red", "orange", "darkred", "skyblue"];
var distance;

function setup() {
	createCanvas(2000, 600);
	distance = 150;
}

function draw() {

	background(0);
	textAlign(CENTER);
	for (var i = 0; i < 8; i++) {
		fill(colours[i]);
		ellipse(100 + distance * i, height / 2, sizes[i]*1.3, sizes[i]*1.3);
		fill(255);
		text(names[i], 100 + distance * i, height / 2 + 150)
	}
}
