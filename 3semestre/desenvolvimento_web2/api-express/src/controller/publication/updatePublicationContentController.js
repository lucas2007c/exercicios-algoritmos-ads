import { updatePublicationContent } from "../../model/publicationModel.js"

export default async function updatePublicationContentController(req, res) {
    const { id } = req.params
    const { content } = req.body

    const result = await updatePublicationContent(id, content)

    res.json({
        message: "Conteúdo da publicação atualizado com sucesso!",
        publication: result
    })
}