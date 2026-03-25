import { prisma } from '../helpers/dbConnection.js';

export const createUser = async (user) => {
    return await prisma.user.create({
        data: user
    })
}

export const getUsers = async () => {
    return await prisma.user.findMany()
}

export const deleteUser = async (id) => {
    return await prisma.user.delete({
        where: {
            id: +id
        }
    })
}

export const updateUser = async (id, user) => {
    return await prisma.user.update({
        where: {
            id: +id
        },
        data: user
    })
}

export const updateUserAvatar = async (id, avatar) => {
    return await prisma.user.update({
        where: {
            id: +id
        },
        data: {
            avatar
        }
    })
}