import { FORMAT, WIDTH, HEIGHT, MAX_COLOR } from './config/Config';
import { Template } from './template/Template';
import { Exporter } from './lib/Exporter';

const template = Template(FORMAT, WIDTH, HEIGHT, MAX_COLOR);

let content = '';

let rValue;
let gValue;
let bValue;
let triplet = '';

for(let i = HEIGHT - 1; i >= 0; i--) {
	for(let j = 0; j < WIDTH; j++) {
		rValue = 255;
		gValue = 255;
		bValue = 255; 
		triplet += `${rValue} ${gValue} ${bValue}  `;
	}
}

content = `${template}${triplet}`;

Exporter('canvas_01', content); 


