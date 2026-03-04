import express from 'express'

const router = express.Router()

import getUsersControllers from '../controller/user/getUsersControllers.js'
import createUser from '../controller/user/createUserController.js'
import updateUserController from '../controller/user/updateUserController.js'
import deleteUser from '../controller/user/deleteUserController.js'
import updateUserAvatar from '../controller/user/updateUserAvatarController.js'

router.get('/', getUsersControllers)
router.post('/', createUser)
router.put('/', updateUserController)
router.patch('/', updateUserAvatar)
router.delete('/', deleteUser)

export default router