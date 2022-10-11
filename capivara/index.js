print("aaaaaaaaaaaa")
 
let interval = 0;
let sleep = 200;
timeout(sleep, interval, () => {
    print('1 ' + new Date().toISOString())
})