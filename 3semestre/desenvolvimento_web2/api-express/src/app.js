import express from "express"

const app = express()
const port = 3000

app.get('/', (req, res) => {
    res.send('Hello World!')
})

app.get('/user', (req, res) => {
    res.send('GET/ Usuários listados')
})

app.post('/user', (req, res) => {
    res.send('POST/ Usuário criado')
})

app.put('/user', (req, res) => {
    res.send('PUT/ Usuário atualizado')
})

app.patch('/user', (req, res) => {
    res.send('PATCH/ Nome do usuário atualizado')
})

app.delete('/user', (req, res) => {
    res.send('DELETE/ Usuário deletado')
})

app.listen(port, () => {
    console.log(`Servidor rodando em http://localhost:${port}`)
})