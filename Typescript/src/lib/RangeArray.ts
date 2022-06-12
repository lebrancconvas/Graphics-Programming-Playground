export const RangeArray = (start: number, end: number, step: number) => {
	const arrayLength = Math.floor(((end - start) / step)) + 1;
  const range = [...Array(arrayLength).keys()].map(x => (x * step) + start);
	return range;
}