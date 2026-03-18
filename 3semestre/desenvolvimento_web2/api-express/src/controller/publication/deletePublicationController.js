export default function deletePublicationController(req, res) {
    res.send('Rota: DELETE /publication/' + req.params.id);
}
