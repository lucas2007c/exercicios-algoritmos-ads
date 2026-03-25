import { createUser } from "../../model/userModel.js"

export default async function createUserController(req, res) {
    const user = req.body
    
    const result = await createUser(user)

    res.json({
        message: "Usuário criado com sucesso!",
        user: result
    })
}