strs = ["flower", "flow", "flight"];
var longestCommonPrefix = function (strs) {
  let result = "";
  for (let i = 0; i < strs[0].length; i++) {
    // console.log(strs.every((str) => console.log(str[i],strs[0][i])));
    if (strs.every((str) => str[i] === strs[0][i])) result += strs[0][i];
    else break;
  }
  return result;
};
longestCommonPrefix(strs);
console.log(strs.every((str) => console.log(str)));