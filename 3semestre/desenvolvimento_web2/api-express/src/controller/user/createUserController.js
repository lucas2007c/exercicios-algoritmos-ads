import { createUser } from "../../model/userModel.js"

export default async function createUserController(req, res) {
    const user = {
        avatar: "https://github.com/renancavichi.png",
        name: "Renan Cavichi",
        email: "renancavichi@gmail.com",
        pass: "12345678"
    }

    const result = await createUser(user)

    res.json({
        message: "Usuário criado com sucesso!",
        user: result
    })
}