/*
 * Nehe Lesson 33 Code (ported to Linux//GLX by Patrick Schubert 2003
 * with help from the lesson 1 basecode for Linux/GLX by Mihael Vrbanec)
 */

#ifndef __TEXTURE_H__
#define __TEXTURE_H__

#include <GL/gl.h>

typedef struct
{
	GLubyte	* imageData;									/* Image Data (Up To 32 Bits) */
	GLuint	bpp;											/* Image Color Depth In Bits Per Pixel */
	GLint	width;											/* Image Width */
	GLint	height;											/* Image Height */
	GLuint	texID;											/* Texture ID Used To Select A Texture */
	GLuint	type;											/* Image Type (GL_RGB, GL_RGBA) */
} Texture;	

#endif
