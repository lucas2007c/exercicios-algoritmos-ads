import express from "express"


import userRouter from './routers/userRouter.js'
import publicationRouter from './routers/publicationRouter.js'

const app = express()
const port = 3000

app.use(express.json())

app.get('/', (req, res) => {
    res.send('Hello World!')
})


app.use('/user', userRouter)
app.use('/publication', publicationRouter)


app.listen(port, () => {
    console.log(`Servidor rodando em http://localhost:${port}`)
})