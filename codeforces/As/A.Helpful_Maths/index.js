const process = require("process");
const readline = require("readline")

/**
  * A program that sorts the summands in non-decreasing order.
  */
function main() {
  let res = "";
  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  })
  rl.on("line", (line) => {
    const nums = line.trim().split("+").sort();
    res = nums.join("+");
    console.log(res)
    rl.close()
  })
}

main();
