/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
//  Approch 1
function createCounter(init) {
    let counter = init;
    return {
        increment() {
            return ++counter;
        },
        reset() {
            return counter = init;
        },
        decrement() {
            return --counter;
        }
    };
}

// Approch 2
// function createCounter(init) {
//   let i = 0;
//   return {
//     increment: () => init + ++i,
//     decrement: () => init + --i,
//     reset: () => {
//       i = 0;
//       return init;
//     }
//   }
// }
/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
