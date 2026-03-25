import { updateUser } from "../../model/userModel.js"

export default function updateUserController(req, res) {
    const { id } = req.params
    const user = req.body

    const result = updateUser(id, user)

    res.json({
        message: "Usuário atualizado com sucesso!",
        user: result
    })
}