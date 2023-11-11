/**
 * @param {number[]} num
 * @param {number} k
 * @return {number[]}
 */
var addToArrayForm = function (num, k) {
  return (BigInt(num.join("")) + BigInt(k)).toString().split("");
};

console.log(addToArrayForm([0], 23));
