/**
 * @param {any} val
 * @return {Object}
 */
function expect(val) {
    function toBe(vTemp) {
        if (val !== vTemp) {
            throw new Error('Not Equal');
        }
        return true;
    }

    function notToBe(vTemp) {
        if (val === vTemp) {
            throw new Error('Equal');
        }
        return true;
    }

    return {
        toBe,
        notToBe
    };
}

// Example usage:
// expect(5).toBe(5); // {"value": true}
// expect(5).notToBe(5); // throws Error: "Equal"
