import { updatePublication } from "../../model/publicationModel.js"

export default async function updatePublicationController(req, res) {
    const { id } = req.params
    const publication = req.body

    const result = await updatePublication(id, publication)

    res.json({
        message: "Publicação atualizada com sucesso!",
        publication: result
    })
}
