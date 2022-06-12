import fs from 'fs';

export const Exporter = (fileName: string, content: string) => {
	fs.writeFileSync(`../data/output/${fileName}.ppm`, content);
};