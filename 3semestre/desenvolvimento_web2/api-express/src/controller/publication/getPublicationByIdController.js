export default function getPublicationByIdController(req, res) {
    res.send('Rota: GET /publication/' + req.params.id);
}
