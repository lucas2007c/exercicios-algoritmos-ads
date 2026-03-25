import { deleteUser } from "../../model/userModel.js"

export default async function deleteUserController(req, res) {
    const { id } = req.params

    const result = await deleteUser(id)

    res.json({
        message: "Usuário deletado com sucesso!",
        user: result
    })
}