This module is in development. Its purpose is to allow inter-communication between Aegir servers (to address the "smart nodes" use case). The point is to centralize information to facilitate management of multiple servers.

We use hosting\_services and 2-legged OAuth. You can use hosting\_network\_node to get the right OAuth configuration, afterwards you'll have to add an OAuth consumer to a user (presumably admin in development).

Right now the module is pretty barebones but it does a few things:
 * Provides a network overview/dashboard, with platforms and recent tasks for each network node (with accurate status).
 * Provides a list of sites and the standard task list for each remote platform.
 * Provides the standard task list for each remote site.
 * Allows viewing the task log of any remote task.
 * Displays a direct link to the login page of each server.
 * Provides a standarized feature for the remote server configuration (Aegir Network Node)
 * Provides a server type to register the OAuth Network Node server type.

Todo:
 * Allow the user to run the tasks instead of just viewing them.
 * Make sites and platforms prettier and more informative by using the standard template.
 * Detailed server page
 * Add task info to task log page.
 * Wishlist: Implement auto-refresh AJAX thingamajig.
 * Possibly? allow direct login without authentication. Feedback especially welcome on this idea.
 * Known bug: Locked remote platforms do not appear in the overview.
 * Misc, see code.


Developped by gboudrias at [Praxis Labs](https://praxis.coop). Pull requests welcome.
