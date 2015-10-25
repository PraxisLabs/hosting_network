<?php

/**
 * The base service type class , registered with hook_hosting_service_type.
 */
class hostingService_network_node extends hostingService {
  public $service = 'network_node';
}

class hostingService_network_node_hostmaster extends hostingService_network_node {
  /**
   *   the value stored in the type column of the hosting_service table.
   */
  public $type = 'hostmaster';


  /**
   *   this service needs to have a port specified for it.
   */
  public $has_port = FALSE;
}

