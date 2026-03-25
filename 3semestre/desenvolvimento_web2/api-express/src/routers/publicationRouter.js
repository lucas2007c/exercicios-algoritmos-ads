import express from 'express';

import createPublicationController from '../controller/publication/createPublicationController.js';
import getPublicationsController from '../controller/publication/getPublicationsController.js';
import getPublicationByIdController from '../controller/publication/getPublicationByIdController.js';
import updatePublicationController from '../controller/publication/updatePublicationController.js';
import updatePublicationContentController from '../controller/publication/updatePublicationContentController.js';
import deletePublicationController from '../controller/publication/deletePublicationController.js';

const router = express.Router();

router.get('/', getPublicationsController);
router.get('/:id', getPublicationByIdController);
router.post('/', createPublicationController);
router.put('/:id', updatePublicationController);
router.patch('/:id', updatePublicationContentController);
router.delete('/:id', deletePublicationController);

export default router;