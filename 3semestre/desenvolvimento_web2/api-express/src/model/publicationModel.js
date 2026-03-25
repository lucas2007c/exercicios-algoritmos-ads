import { prisma } from '../helpers/dbConnection.js';

export const createPublication = async (publication) => {
    return await prisma.publication.create({
        data: publication
    });
};

export const getPublications = async () => {
    return await prisma.publication.findMany()
}

export const deletePublication = async (id) => {
    return await prisma.publication.delete({
        where: {
            id: +id
        }
    })
}

export const updatePublication = async (id, publication) => {
    return await prisma.publication.update({
        where: {
            id: +id
        },
        data: publication
    })
}

export const updatePublicationContent = async (id, content) => {
    return await prisma.publication.update({
        where: {
            id: +id
        },
        data: {
            content
        }
    })
}