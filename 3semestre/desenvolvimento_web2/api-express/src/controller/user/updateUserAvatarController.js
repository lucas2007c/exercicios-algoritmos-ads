export default async function updateUserAvatarController(req, res){
    const { id } = req.params
    const { avatar } = req.body

    const result = await updateUser(id, { avatar })

    res.json({
        message: "Avatar do usuário atualizado com sucesso!",
        user: result
    })
}