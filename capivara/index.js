let interval = 0;
let sleep = 200;
print('Hello World ' + new Date().toISOString())
timeout(sleep, interval, () => {
    print('1 ' + new Date().toISOString())
    timeout(sleep, interval, () => {
        print('2 ' + new Date().toISOString())
    })
    timeout(sleep, interval, () => {
        print('3 ' + new Date().toISOString())
    })
})