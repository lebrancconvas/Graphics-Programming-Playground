import { FORMAT, WIDTH, HEIGHT, MAX_COLOR } from './config/Config';
import { Template } from './template/Template';
import { PPMExporter } from './lib/PPMExporter';

import { RangeArray } from './lib/RangeArray';

const template = Template(FORMAT, WIDTH, HEIGHT, MAX_COLOR);

let content: string;

let rValue: number, gValue: number, bValue: number;
let triplet: string = '';

// Create White Canvas. 
for(let i = HEIGHT - 1; i >= 0; i--) {
	for(let j = 0; j < WIDTH; j++) {
		[rValue, gValue, bValue] = [255, 255, 255];
		triplet += `${rValue} ${gValue} ${bValue}  `;
	}
}

// Create Black Line. 

content = `${template}${triplet}`;

PPMExporter('blank_canvas', content); 


