 printf("Enter your name :");
    getchar();
    fgets(name, sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    printf("%s\n",name);
   