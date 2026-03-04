import express from 'express'

const router = express.Router()

import getPostsController from '../controller/post/getPostsController.js'
import createPostController from '../controller/post/createPostController.js'
import updatePostController from '../controller/post/updatePostController.js'
import updatePostNameController from '../controller/post/updatePostNameController.js'
import deletePostController from '../controller/post/deletePostController.js'

router.get('/', getPostsController)
router.post('/', createPostController)
router.put('/', updatePostController)
router.patch('/', updatePostNameController)
router.delete('/', deletePostController)

export default router