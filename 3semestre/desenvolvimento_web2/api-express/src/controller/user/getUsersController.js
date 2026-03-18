import { getUsers } from "../../model/userModel.js";

export default async function getUsersController(req, res) {
    const users = await getUsers()

    res.json({
        message: "Lista de usuários",
        users
    })
}