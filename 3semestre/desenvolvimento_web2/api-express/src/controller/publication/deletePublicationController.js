import { deletePublication } from "../../model/publicationModel.js"

export default async function deletePublicationController(req, res) {
    const { id } = req.params

    const result = await deletePublication(id)

    res.json({
        message: "Publicação deletada com sucesso!",
        publication: result
    })
}
