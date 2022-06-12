import fs from 'fs';

export const PPMExporter = (fileName: string, content: string) => {
	fs.writeFileSync(`../data/output/${fileName}.ppm`, content);
};