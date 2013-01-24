#Sandbox profile
Installation profile for sandbox.
This is for use with situs. https://github.com/xendk/situs

##Drush alias

Edit your ~/.drush/aliases.drushrc.php (or wherever you keep it)
and add:

    $aliases['sandbox'] = array(
      'uri' => 'loc.sandbox',
      'root' => '/srv/www/sandbox/docroot',
      'make-file' => '/srv/www/sandbox/sandbox_profile/sandbox.make'
    );

##Run situs

    drush situs @sandbox

Then symlink the sandbox_profile into profiles

    ln -s /PATH/TO/PROFILE/sandbox_profile /PATH/TO/DOCROOT/sandbox

##Install
Then you just have to run this command to install

    drush @sandbox si sandbox --db-url=mysql://USER:PASSWORD@127.0.0.1/DB_NAME

Phresh!
