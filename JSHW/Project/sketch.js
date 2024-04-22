var lastx;
var lasty;

function setup() {
	createCanvas(1333, 1000);
}

function draw() {
	// Расположение мышки 

	background("DarkSalmon");
	noStroke();
	// Коробки в правом верхнем углу
	var count = 50;
	for (let i = 0; i < 5; i++) {
		let step = [12, 13];
		if (i % 2 == 0) {
			fill("black");
		} else {
			fill("GoldenRod");
		};
		count += step[i % 2];
		rect(800, count, 130, step[(i + 1) % 2]);
	};

	count = 1000;
	for (let i = 0; i < 9; i++) {
		let step = [16, 9];
		if (i % 2 == 0) {
			fill("black");
		} else {
			fill("brown");
		}
		count += step[i % 2];
		rect(count, 45, step[(i + 1) % 2], 130);
	};

	// Территория большой трапеции
	fill("DarkViolet");
	quad(780, 280, 1100, 370, 950, 780, 600, 600);

	// Решётка снизу с права (горизонт)
	stroke("black");
	strokeWeight(3);
	line(990, 700, 1160, 780);
	line(985, 705, 1150, 820);
	line(980, 708, 1140, 860);
	line(940, 730, 1135, 910);
	line(945, 750, 1125, 940);
	//(вертикаль)
	line(940, 870, 1050, 670);
	line(945, 875, 1100, 690);
	line(1010, 890, 1110, 700);
	line(1090, 925, 1150, 750);

	//Вертушкаа на трапеции
	strokeWeight(4);
	line(950, 400, 1073, 375);
	line(950, 400, 1048, 330);
	line(950, 400, 1020, 300);
	line(950, 400, 967, 280);


	//Лиинии снизу в верх
	line(740, 888, 1110, 527);
	strokeWeight(3);
	line(725, 874, 1104, 406);
	line(664, 848, 696, 728);

	//Коробочки снизу вверх
	fill("black")
	quad(739, 714, 798, 757, 753, 829, 694, 783);
	fill("DarkTurquoise")
	quad(739, 714, 798, 757, 835, 697, 769, 668);
	noStroke();
	fill("red")
	quad(741, 713.5, 797.8, 754.8, 816.2, 724.4, 756.8, 688.7);
	stroke("black");
	fill("white");
	quad(835, 697, 769, 668, 806, 613, 871, 636);
	fill("DeepSkyBlue");
	quad(806, 613, 871, 636, 931, 537, 872, 513);
	fill("DodgerBlue");
	triangle(931, 537, 876, 512, 899, 472);

	line(753, 828, 931, 537);
	strokeWeight(4);

	// Между треугольником и брусом
	noStroke();
	fill("yellow");
	quad(778, 469, 811, 482, 792, 506, 766, 491);
	fill("DodgerBlue");
	quad(766, 492, 791, 506, 769, 535, 754, 517);
	fill("Maroon");
	quad(811, 482, 790, 507, 817, 521, 833, 491);
	quad(817, 521, 792, 506, 769, 534, 794, 566);
	fill("OrangeRed");
	quad(832, 492, 817, 521, 851, 542, 874, 510);
	fill("PaleVioletRed");
	quad(816, 522, 851, 543, 815, 595, 793, 566);
	stroke("black");
	line(811, 484, 769, 537);
	line(833, 493, 794, 566);
	line(1107, 612, 454, 328);
	line(692, 781, 872, 513);
	line(754, 518, 815, 595);
	line(768, 493, 852, 544);

	// Треугольник и рядом с ним
	stroke("black");
	fill("white");
	triangle(454, 328, 779, 469, 708, 607);
	noStroke();
	fill("orange");
	quad(692, 433, 639, 528, 707.5, 603.6, 776.8, 469.5);

	// Треугольник над трапецией
	stroke('black');
	fill("Moccasin");
	triangle(633, 32, 619, 274, 776, 172);
	fill("black");
	quad(745, 220, 792, 188, 850, 243, 779, 281);
	fill("white");
	quad(877, 229, 780, 281, 806, 325, 890, 281);
	triangle(746, 220, 789, 192, 769, 263);
	noStroke();
	fill("black");
	quad(685, 332, 732, 306, 754, 354, 713, 376);
	fill("orange");
	triangle(780, 280, 853, 298, 806, 324);
	triangle(780, 280, 732, 364, 806, 325);

	stroke("black");

	line(733, 307, 753, 354);
	line(665, 343, 696, 385);
	line(920, 310, 640, 41);
	line(746, 220, 793, 188);
	line(733, 200, 806, 326);
	line(666, 342, 878, 230);
	line(696, 385, 891, 282);
	//Территория круга 

	//Основа круга
	noStroke();
	fill("orange");
	ellipse(270, 601, 480);
	fill("red");
	ellipse(270, 601, 460);

	//Нижняя часть + треугольник по центру
	fill("PowderBlue");
	ellipse(417, 693, 220);
	fill("Blue");
	ellipse(417, 693, 200);
	fill("DarkBlue");
	ellipse(417, 693, 180);
	fill(135, 206, 250);
	stroke("black");
	triangle(434, 340, 573, 698, 88, 670);
	fill("DarkGreen");
	triangle(66, 770, 229, 726, 178, 885);
	line(92, 932, 125, 781);
	fill("black");
	ellipse(270, 601, 440);
	strokeWeight(1);
	fill("white");
	ellipse(157, 609, 110);
	fill(184, 134, 11, 200);
	triangle(170, 582, 14, 764, 44, 801);
	strokeWeight(6);
	line(118, 968, 250, 968);
	strokeWeight(4);
	fill("DodgerBlue");
	rect(285, 897, 75, 25);
	strokeWeight(8);
	line(306, 940, 400, 940);
	line(293, 548, 374, 978);
	fill(250, 145, 70);
	triangle(292, 546, 154, 849, 350, 854);
	noFill();
	strokeWeight(4);
	quad(361, 922, 180, 922, 180, 897, 360, 897);
	let color = ["SandyBrown", "Maroon", "PowderBlue"];
	for (let i = 0; i < 3; i++) {
		fill(color[i]);
		rect(180 + i * 35, 897, 35, 25);
	}


	//Линии сверху
	strokeWeight(3);
	stroke("black");
	line(257, 274, 326, 69);
	line(166, 277, 48, 212);
	line(166, 277, 80, 122);
	line(166, 277, 112, 90);
	line(166, 277, 189, 74);
	strokeWeight(1);
	fill("black");
	quad(322, 229, 457, 66, 465, 73, 332, 238);
	quad(324, 308, 332, 314, 492, 89, 488, 89);
	fill("Moccasin");
	triangle(496, 137, 565, 194, 365, 381);
	fill(139, 0, 0, 200);
	ellipse(372, 404, 150);
	fill("black");
	quad(468, 640, 462, 653, 609, 792, 633, 762);
	quad(400, 712, 562, 912, 497, 941, 384, 706);


	fill(255);
	strokeWeight(1);
	text("X: " + mouseX, mouseX - 50, mouseY - 25);
	text("Y: " + mouseY, mouseX - 50, mouseY);
	console.log(lastx + "," + lasty);

}

function mousePressed() {
	lastx = Math.round(mouseX);
	lasty = Math.round(mouseY);

}
