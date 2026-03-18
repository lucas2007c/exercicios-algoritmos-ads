import { createPublication } from "../../model/publicationModel.js"

export default async function createPublicationController(req, res) {
    const publication = req.body

    const result = await createPublication(publication)
    
    res.json({
        message: "Publicação criada com sucesso!",
        publication: result
    })
}
