import { getPublications } from "../../model/publicationModel.js";

export default async function getPublicationsController(req, res) {
    const publications = await getPublications();

    res.json({
        message: "Lista de publicações",
        publications
    })
};