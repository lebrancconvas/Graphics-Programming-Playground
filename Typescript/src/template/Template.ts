
export const Template = (format: string, width: number, height: number, maxColor: number): string => {
	let template: string = `${format}\n${width} ${height}\n${maxColor}\n`;
	return template;
};