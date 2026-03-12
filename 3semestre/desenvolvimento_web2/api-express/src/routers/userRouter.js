import express from 'express'

const router = express.Router()

import getUsersController from '../controller/user/getUsersController.js'
import createUserController from '../controller/user/createUserController.js'
import updateUserController from '../controller/user/updateUserController.js'
import updateUserAvatarController from '../controller/user/updateUserAvatarController.js'
import deleteUserController from '../controller/user/deleteUserController.js'


router.get('/', getUsersController)
router.post('/', createUserController)
router.put('/', updateUserController)
router.patch('/', updateUserAvatarController)
router.delete('/', deleteUserController)

export default router