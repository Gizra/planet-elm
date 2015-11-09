#!/bin/bash

#
# Copy local changes to the Pantheon folder.
#

PROFILE=planet_elm

MAKE_DIR=/var/www/planet_elm/www
PANTHEON_DIR=/var/www/pantheon-planet_elm

cd $PANTHEON_DIR
git pull

rm -rf $PANTHEON_DIR/profiles/$PROFILE
cp -R $MAKE_DIR/$PROFILE $PANTHEON_DIR/profiles/$PROFILE