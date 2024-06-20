var heads;

function setup() {
	createCanvas(1000, 500);
	heads = [];
	for (var i = 1; i < 4; i++) {
		heads.push(createHead(i * 100, i * 100));
    console.log(heads[i-1]);
	}
    
}


function draw() {
	background(100,100,100);
	for (var i = 0; i < heads.length; i++) {
		heads[i].drawHead();
        console.log(i);
	}

}

function createHead(cordX, cordY) {
	var head = {
		posX: cordX,
		posY: cordY,
		drawHead: function () {
			fill("red");
			rect(this.posX, this.posY, 100,100);
			fill("white");
			ellipse(this.posX + 50, this.posY + 50, 50,50);
		}
	};
		return head;
}

